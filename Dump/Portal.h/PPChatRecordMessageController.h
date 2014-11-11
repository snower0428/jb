/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import "PPChatBaseMessageController.h"

@class ALPTipView;

@interface PPChatRecordMessageController : PPChatBaseMessageController <UIAlertViewDelegate> {
@private
	ALPTipView* _tipView;
}
@property(retain, nonatomic) ALPTipView* tipView;
-(void).cxx_destruct;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)alert:(id)alert;
-(void)messageDataRequestHeadMessgesFailWithError:(id)error;
-(void)setMessages:(id)messages;
-(void)configureMessage:(id)message;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)back;
-(id)initWithDataSource:(id)dataSource;
@end
