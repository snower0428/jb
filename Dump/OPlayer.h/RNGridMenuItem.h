//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface RNGridMenuItem : NSObject
{
    UIImage *_image;
    NSString *_title;
    CDUnknownBlockType _action;
}

+ (id)emptyItem;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 title:(id)arg2;
- (id)initWithImage:(id)arg1 title:(id)arg2 action:(CDUnknownBlockType)arg3;

@end
