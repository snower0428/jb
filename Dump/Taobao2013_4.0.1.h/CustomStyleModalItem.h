//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, UIViewController;

@interface CustomStyleModalItem : NSObject
{
    UIViewController *_presentedVC;
    UIViewController *_presentingVC;
    UIView *_presentMask;
    UIView *_presentDrop;
    CDUnknownBlockType _maskTapHandler;
    struct CGRect _presentFrame;
}

@property(copy, nonatomic) CDUnknownBlockType maskTapHandler; // @synthesize maskTapHandler=_maskTapHandler;
@property(retain, nonatomic) UIView *presentDrop; // @synthesize presentDrop=_presentDrop;
@property(retain, nonatomic) UIView *presentMask; // @synthesize presentMask=_presentMask;
@property(nonatomic) struct CGRect presentFrame; // @synthesize presentFrame=_presentFrame;
@property(retain, nonatomic) UIViewController *presentingVC; // @synthesize presentingVC=_presentingVC;
@property(retain, nonatomic) UIViewController *presentedVC; // @synthesize presentedVC=_presentedVC;
- (void).cxx_destruct;

@end
