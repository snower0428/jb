/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCPhonePayPasswordSetViewController.h"

@class NSString;
@protocol SCPCPhonePSWSetViewControllerDelegate;

@interface SCPCPhonePSWSetViewController : SCPhonePayPasswordSetViewController {
@private
	BOOL _isFirst;
	BOOL _isScanCode;
	unsigned _loginType;
	NSString* _loginId;
	NSString* _password;
	NSString* _registerId;
	id<SCPCPhonePSWSetViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<SCPCPhonePSWSetViewControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dealloc;
-(void)setPasswordWithLoginId:(id)loginId regId:(id)anId password:(id)password;
-(void)userSetCompleteAction;
-(void)requestLoginId;
-(void)viewDidAppear:(BOOL)view;
-(void)back;
-(void)viewDidLoad;
-(id)init;
-(id)initWithRegisterId:(id)registerId andSourceType:(BOOL)type;
@end
