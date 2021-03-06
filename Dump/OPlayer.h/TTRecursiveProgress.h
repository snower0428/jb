//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTRecursiveProgress : NSObject
{
    id <TTRecursiveProgressDelegate> _delegate;
    TTRecursiveProgress *_parent;
    float _firstPercent;
    float _lastPercent;
}

+ (id)progressWithParent:(id)arg1 firstPercent:(float)arg2 lastPercent:(float)arg3;
+ (id)progressWithDelegate:(id)arg1;
@property(nonatomic) id <TTRecursiveProgressDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float lastPercent; // @synthesize lastPercent=_lastPercent;
@property(nonatomic) float firstPercent; // @synthesize firstPercent=_firstPercent;
@property(nonatomic) float percent;
- (float)percentWidth;
- (id)initWithParent:(id)arg1 firstPercent:(float)arg2 lastPercent:(float)arg3;
- (id)initWithDelegate:(id)arg1;

@end

