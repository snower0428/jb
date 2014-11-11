/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AssetsBaseScrollViewController.h"

@class ALPButton, NSString;

@interface ALPFundAddBankCardTipViewController : AssetsBaseScrollViewController {
	ALPButton* _addBankCardButton;
	NSString* _opTextValue;
	NSString* _imgUrl;
}
@property(retain, nonatomic) NSString* imgUrl;
@property(retain, nonatomic) NSString* opTextValue;
-(void).cxx_destruct;
-(void)addBankCardClicked;
-(void)initButton;
-(void)initLabel;
-(void)initImage;
-(void)backAction:(id)action;
-(void)addBankCardSuccess:(id)success;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

