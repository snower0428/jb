//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBMessageAudioBubble, TBMessageViewCell, WWMessage;

@protocol TBMessageViewCellDelegate <NSObject>
- (void)messageViewCell:(TBMessageViewCell *)arg1 orderDidTapped:(NSString *)arg2;
- (void)messageViewCell:(TBMessageViewCell *)arg1 itemDidTapped:(NSString *)arg2;
- (void)messageViewCell:(TBMessageViewCell *)arg1 imageDidTapped:(NSString *)arg2;
- (void)messageViewCell:(TBMessageViewCell *)arg1 audioBubbleDidStoptAniamtion:(TBMessageAudioBubble *)arg2;
- (void)messageViewCell:(TBMessageViewCell *)arg1 audioBubbleDidStartAniamtion:(TBMessageAudioBubble *)arg2;
- (void)messageViewCell:(TBMessageViewCell *)arg1 deleteWWMessage:(WWMessage *)arg2;
@end
