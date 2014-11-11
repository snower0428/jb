//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActionSheet.h"

#import "UIActionSheetDelegate.h"

@interface UIActionSheet (Blocks) <UIActionSheetDelegate>
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
@property(copy, nonatomic) CDUnknownBlockType dismissalAction;
- (int)addButtonItem:(id)arg1;
- (id)initWithTitle:(id)arg1 cancelButtonItem:(id)arg2 destructiveButtonItem:(id)arg3 otherButtonItems:(id)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showFromToolbar:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)showFromTabBar:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (void)showFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
- (void)showInView:(id)arg1 handler:(CDUnknownBlockType)arg2;
@end

