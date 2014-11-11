/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCLoginAlipayViewController.h"

@class MSUserLoginResult;

@interface SCLoginTaobaoViewController : SCLoginAlipayViewController {
@private
	MSUserLoginResult* _lastLoginResult;
}
@property(retain, nonatomic) MSUserLoginResult* lastLoginResult;
-(void).cxx_destruct;
-(void)handleLoginResult:(id)result loginId:(id)anId password:(id)password;
-(id)authCodeInfo;
-(BOOL)preCheck;
-(id)forgetPasswordBtn;
-(void)initLoginBoxContent;
-(void)loginBox:(id)box historyRecordDidSelected:(id)historyRecord;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
