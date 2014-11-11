/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "AssetsBaseController.h"
#import "BumpControllerDelegate.h"
#import "Portal-Structs.h"
#import "UITableViewDataSource.h"

@class AssetsBaseTableView, NSString, AssetsIDCardTextFieldCell, ALPButton;

@interface ALPAddBankCardViewController : AssetsBaseController <BumpControllerDelegate, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate> {
@private
	ALPButton* _commitBtn;
	NSString* _cardNumber;
	NSString* _subTitle;
	AssetsBaseTableView* _tableView;
	AssetsIDCardTextFieldCell* _cardNumberTextFieldCell;
	NSString* _cachekey;
}
@property(retain, nonatomic) NSString* cachekey;
@property(retain) AssetsIDCardTextFieldCell* cardNumberTextFieldCell;
@property(retain) AssetsBaseTableView* tableView;
@property(retain, nonatomic) NSString* subTitle;
@property(retain, nonatomic) NSString* cardNumber;
+(BOOL)deviceSupportCamera;
-(void).cxx_destruct;
-(void)back;
-(void)dealloc;
-(void)callSupportExpressBankListWithCardType:(id)cardType instId:(id)anId cardNo:(id)no;
-(void)callCCDCWithCardNumber:(id)cardNumber completion:(id)completion;
-(void)nextStep:(id)step;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)textFieldDidChanged:(id)textField;
-(void)logoNetScanOver;
-(void)huoyanUserTrack:(id)track args:(id)args;
-(void)huoyanUserTrack:(id)track;
-(void)exitHuoyan;
-(void)setTorchState:(BOOL)state;
-(void)didFind:(id)find;
-(void)scanCardWithResult:(id)result CardImage:(id)image sender:(id)sender;
-(void)scanCardWithResult:(id)result CardImage:(id)image;
-(void)scanSuccess:(id)success;
-(void)bump:(id)bump;
-(void)onQrcodeSelected:(id)selected;
-(void)onCreditSelected:(id)selected;
-(void)onBarcodeSelected:(id)selected;
-(void)onUserBack:(id)back;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)initTextField;
-(void)initTableView;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
@end

