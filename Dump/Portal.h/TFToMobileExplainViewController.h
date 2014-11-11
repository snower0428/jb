/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TFTransferFormProtocol.h"
#import "UIActionSheetDelegate.h"
#import "TFViewController.h"

@class UIScrollView, NSMutableArray, UILabel, TFMobile, DTRpcAsyncCaller;

@interface TFToMobileExplainViewController : TFViewController <UIActionSheetDelegate, TFTransferFormProtocol> {
@private
	int _backType;
	DTRpcAsyncCaller* _rpcAsyncCaller;
	TFMobile* _mobile;
	UIScrollView* _scrollView;
	UILabel* _twoDaysDesc;
	float _offsetX;
	float _offsetY;
	NSMutableArray* _twoHourBanks;
	NSMutableArray* _nextDayBanks;
}
@property(retain, nonatomic) NSMutableArray* nextDayBanks;
@property(retain, nonatomic) NSMutableArray* twoHourBanks;
@property(assign, nonatomic) float offsetY;
@property(assign, nonatomic) float offsetX;
@property(assign, nonatomic) __weak UILabel* twoDaysDesc;
@property(retain, nonatomic) UIScrollView* scrollView;
@property(retain, nonatomic) TFMobile* mobile;
@property(retain, nonatomic) DTRpcAsyncCaller* rpcAsyncCaller;
@property(assign, nonatomic) int backType;
-(void).cxx_destruct;
-(void)back;
-(void)makeCall;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)clickCallButton:(id)button;
-(void)getBankList;
-(void)addContentLabelWithString:(id)string xOffset:(int)offset;
-(void)addContentLabelWithString:(id)string;
-(void)addTipLabelWithString:(id)string;
-(void)viewInit;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithTransferRequest:(id)transferRequest;
@end

