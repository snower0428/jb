//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (CustomStyleModal)
+ (void)dismissModalVCAtIndex:(int)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)dismissAllExistModalVC;
+ (void)setBaseViewCustomStyleModal:(id)arg1;
- (struct CGRect)presentedFrameForCustomStyle;
- (BOOL)isPresentedCustomStyleModal;
- (void)dismissModalVC:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentModalVC:(id)arg1 frame:(struct CGRect)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 maskColor:(id)arg5 maskTapHandler:(CDUnknownBlockType)arg6;
- (void)presentModalVC:(id)arg1 frame:(struct CGRect)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
@end
