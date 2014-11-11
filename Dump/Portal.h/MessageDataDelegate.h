/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MessageDataDelegate <NSObject>
-(BOOL)messageDataShouldAcceptRealtimeMessage:(id)messageData withContext:(id)context;
-(void)messageDataDidUpdateMessages:(id)messageData;
-(void)messageDataDidLoadRealtimeMessages:(id)messageData;
-(void)messageDataDeleteMessage:(id)message failWithError:(id)error;
-(void)messageDataDidDeleteMessage:(id)messageData;
-(void)messageDataRequestHistoryMessagesFailWithError:(id)error;
-(void)messageDataDidLoadHistoryMessages:(id)messageData gotAll:(BOOL)all;
-(void)messageDataRequestHeadMessgesFailWithError:(id)error;
-(void)messageDataDidLoadHeadMessages:(id)messageData shouldReplace:(BOOL)replace gotAll:(BOOL)all;
@end
