//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIViewController.h"

#import "TBSeckillViewProtocol.h"
#import "UIActionSheetDelegate.h"

@class NSString, TBSeckillOrderService, TBSeckillQuestionModel, TBSeckillStockResponseModel, TBSeckillView, TBServiceContext, UIAlertView;

@interface TBSeckillQuestionController : TBIViewController <TBSeckillViewProtocol, UIActionSheetDelegate>
{
    TBSeckillQuestionModel *_questionModel;
    TBSeckillStockResponseModel *_stockResponseModel;
    NSString *_itemId;
    NSString *_seckillStart;
    NSString *_skuId;
    NSString *_quantity;
    TBSeckillView *_seckillView;
    NSString *_listType;
    NSString *_listParam;
    BOOL _isLoadingStockRequest;
    BOOL _hasStockResponse204Error;
    UIAlertView *_failed204AlertView;
    UIAlertView *_stockFailedAlertView;
    UIAlertView *_orderFailedAlertView;
    id _delegate;
    TBSeckillOrderService *_orderService;
    TBServiceContext *_serviceContext;
}

@property(retain, nonatomic) TBServiceContext *serviceContext; // @synthesize serviceContext=_serviceContext;
@property(retain, nonatomic) TBSeckillOrderService *orderService; // @synthesize orderService=_orderService;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backItemClicked:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)createOrderFailed:(id)arg1;
- (void)createOrderSuccess:(id)arg1;
- (void)createOrderStart:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)updateSeckillStatus:(unsigned int)arg1;
- (void)requestCreateOrder;
- (void)gotoLogin;
- (void)stockRequestFinished:(id)arg1;
- (void)stockRequestFailed:(id)arg1;
- (void)requestStock;
- (void)showLoadingView:(BOOL)arg1;
- (void)answerFinished;
- (void)autoAnswerFinished;
- (void)questionConfirmAction:(id)arg1;
- (void)showToast:(id)arg1;
- (id)confirmButton;
- (void)loadToolBar:(BOOL)arg1;
- (void)reLoadView:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithQuestionModel:(id)arg1 itemId:(id)arg2 seckillStart:(id)arg3 skuId:(id)arg4 quantity:(id)arg5 listType:(id)arg6 listParam:(id)arg7 delegate:(id)arg8;
- (void)dealloc;

@end
