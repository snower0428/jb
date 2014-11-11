//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface TBSNSNewCardViewOption : NSObject
{
    BOOL _masksToBounds;
    int _section;
    float _borderWidth;
    float _cornerRadius;
    UIColor *_borderColor;
    UIColor *_backgroundColor;
    struct CGRect _rectFrame;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) BOOL masksToBounds; // @synthesize masksToBounds=_masksToBounds;
@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) float borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) struct CGRect rectFrame; // @synthesize rectFrame=_rectFrame;
@property(nonatomic) int section; // @synthesize section=_section;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
