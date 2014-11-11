/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALPInputCardInfoViewController.h"
#import "ALPAgreementBoxDelegate.h"
#import "UIAlertViewDelegate.h"
#import "Portal-Structs.h"
#import "UIActionSheetDelegate.h"

@class NSArray, NSString;

@interface ALPInputCardInfoRegisterViewController : ALPInputCardInfoViewController <UIAlertViewDelegate, ALPAgreementBoxDelegate, UIActionSheetDelegate> {
@private
	NSString* _tairKey;
	NSArray* _procotols;
}
@property(retain) NSArray* procotols;
@property(retain) NSString* tairKey;
-(void).cxx_destruct;
-(void)back;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)agreementBoxLinkClicked:(id)clicked;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(id)buildQuickOpenReq:(id)req;
-(void)submitCardInfo:(id)info;
-(void)setupUI;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
