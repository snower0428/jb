/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TTTAttributedLabelDelegate.h"
#import "SCNameIdentifyBaseViewController.h"

@class SCCheckBox, MSCheckCertifyByMspRes, DTRpcAsyncCaller, ALPButton;

@interface SCDoIdentifyingViewController : SCNameIdentifyBaseViewController <TTTAttributedLabelDelegate> {
@private
	MSCheckCertifyByMspRes* _checkResult;
	ALPButton* _confirmBtn;
	SCCheckBox* _checkBox;
	DTRpcAsyncCaller* _rpcCaller;
}
@property(retain, nonatomic) DTRpcAsyncCaller* rpcCaller;
@property(assign, nonatomic) __weak SCCheckBox* checkBox;
@property(assign, nonatomic) __weak ALPButton* confirmBtn;
@property(retain, nonatomic) MSCheckCertifyByMspRes* checkResult;
-(void).cxx_destruct;
-(void)attributedLabel:(id)label didSelectLinkWithURL:(id)url;
-(void)onConfirm;
-(void)onCheckBox:(id)box;
-(void)onBack;
-(void)creatSubviews;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

