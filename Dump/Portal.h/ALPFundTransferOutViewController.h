/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AssetsBaseScrollViewController.h"

@class UIScrollView, ALPSegmentedBox, ALPFundTransferOutBalanceViewController, ALPFundTransferOutBankCardViewController;

@interface ALPFundTransferOutViewController : AssetsBaseScrollViewController {
@private
	ALPFundTransferOutBalanceViewController* _balanceController;
	ALPFundTransferOutBankCardViewController* _bankCardController;
	ALPSegmentedBox* _segmentBox;
	UIScrollView* _contentView;
}
-(void).cxx_destruct;
-(void)didReceiveMemoryWarning;
-(void)doExpanedView:(id)view;
-(void)switchSegment:(id)segment;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)backAction:(id)action;
-(void)viewDidLoad;
@end
