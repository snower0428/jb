//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewItem.h"

@class MTFeedbackDTO, NSString;

@interface MTChatItem : MTTableViewItem
{
    BOOL _isFromMe;
    MTFeedbackDTO *_feedbackDTO;
    NSString *_sendTime;
    NSString *_sender;
    int _sendState;
    CDUnknownBlockType _deleteActionCallback;
    CDUnknownBlockType _sendActionCallback;
}

@property(copy, nonatomic) CDUnknownBlockType sendActionCallback; // @synthesize sendActionCallback=_sendActionCallback;
@property(copy, nonatomic) CDUnknownBlockType deleteActionCallback; // @synthesize deleteActionCallback=_deleteActionCallback;
@property(nonatomic) int sendState; // @synthesize sendState=_sendState;
@property(nonatomic) BOOL isFromMe; // @synthesize isFromMe=_isFromMe;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(copy, nonatomic) NSString *sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) MTFeedbackDTO *feedbackDTO; // @synthesize feedbackDTO=_feedbackDTO;
- (void).cxx_destruct;
- (void)doSend;
- (void)resendFeedback;
- (void)sendFeedback:(id)arg1;
- (struct CGSize)messageSize;
@property(readonly) float messageWith;
- (float)cellHeight;
- (id)init;
- (float)maxWidth;

@end

