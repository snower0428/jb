/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCSecurityBaseController.h"

@class NSString, UILabel;

@interface SMOProActionViewController : SCSecurityBaseController {
@private
	NSString* _errCode;
	NSString* _backBtnTitle;
	UILabel* _title;
	UILabel* _content;
	UILabel* _title2;
	UILabel* _content2;
}
-(void).cxx_destruct;
-(void)didReceiveMemoryWarning;
-(void)exit;
-(void)nextBtnClick:(id)click;
-(void)back;
-(id)msgWithCode:(id)code;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(id)initWithErrCode:(id)errCode BackBtnTitle:(id)title;
@end

