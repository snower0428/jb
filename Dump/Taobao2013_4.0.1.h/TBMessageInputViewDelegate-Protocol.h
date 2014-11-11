//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBAudioRecorder, TBMessageInputView;

@protocol TBMessageInputViewDelegate <NSObject>
- (void)messageInputViewWillOpenKeyboard:(TBMessageInputView *)arg1;
- (void)messageInputViewWillCloseKeyboard:(TBMessageInputView *)arg1;
- (void)messageInputView:(TBMessageInputView *)arg1 shouldChooseImageWith:(int)arg2;
- (void)messageInputView:(TBMessageInputView *)arg1 recorderToSend:(TBAudioRecorder *)arg2;
- (void)messageInputView:(TBMessageInputView *)arg1 textToSend:(NSString *)arg2;
- (void)messageInputView:(TBMessageInputView *)arg1 willChangeToFrame:(struct CGRect)arg2;
@end
