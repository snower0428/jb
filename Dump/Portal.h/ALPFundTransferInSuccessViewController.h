/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AssetsBaseController.h"

@class NSString, UILabel, UIView;

@interface ALPFundTransferInSuccessViewController : AssetsBaseController {
	UILabel* successTitleLabel;
@private
	NSString* _amount;
	NSString* _profitDate;
	UIView* _successView;
}
@property(retain) UIView* successView;
@property(retain) NSString* profitDate;
@property(retain) NSString* amount;
-(void).cxx_destruct;
-(void)didReceiveMemoryWarning;
-(void)confirmClicked;
-(void)initSuccessResult;
-(void)createResultView:(id)view;
-(void)initSuccessView;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
