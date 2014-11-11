/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "UIScrollViewDelegate.h"
#import "NSObject.h"


@protocol UITextViewDelegate <NSObject, UIScrollViewDelegate>
@optional
-(BOOL)textView:(id)view shouldInteractWithTextAttachment:(id)textAttachment inRange:(NSRange)range;
-(BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(NSRange)range;
-(void)textViewDidChangeSelection:(id)textView;
-(void)textViewDidChange:(id)textView;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidEndEditing:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(BOOL)textViewShouldEndEditing:(id)textView;
-(BOOL)textViewShouldBeginEditing:(id)textView;
@end

