/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class KABAOPRODFundTransferInManager, KABAOPRODFundAssetManager, KABAOPRODFundCommonManager, DTRpcAsyncCaller;

@interface ALPFundAssetManager : XXUnknownSuperclass {
@private
	KABAOPRODFundAssetManager* _fundAssetManager;
	KABAOPRODFundTransferInManager* _fundAssetTransferInManager;
	DTRpcAsyncCaller* _fundTransferInRpcCaller;
	DTRpcAsyncCaller* _fundTransferInResultRpcCaller;
	DTRpcAsyncCaller* _fundQueryAssetInfoRpcCaller;
	DTRpcAsyncCaller* _fundAutoTransferInSetCaller;
	KABAOPRODFundCommonManager* _fundCommonManager;
	DTRpcAsyncCaller* _queryAssetsInfoCaller;
	DTRpcAsyncCaller* _queryAssetsWithOutDiagramCaller;
	DTRpcAsyncCaller* _queryFundTradeListCaller;
}
+(id)shareInstance;
-(void).cxx_destruct;
-(void)persistToastedDate;
-(BOOL)hasToastedPreviousProfit;
-(float)getManagerDetailTextLabelHeight;
-(float)getManagerCellTextLabelHeight;
-(void)cancelQueryFundAssetsInfo;
-(id)_unarchieveFunctionData;
-(void)_archieveFunctionData:(id)data;
-(id)_functionDataKey;
-(BOOL)saveFundHomeData:(id)data;
-(id)getFundHomeData;
-(void)queryAssetsInfoWithOutDiagram:(id)outDiagram completion:(id)completion;
-(void)queryAssetsInfo:(id)info completion:(id)completion;
-(void)queryFundTradeList:(id)list complete:(id)complete;
-(void)queryFundAssetsInfo:(id)info completion:(id)completion;
-(void)queryAutoTransferStatus:(id)status;
-(void)applyAutoTransferIn:(id)anIn completion:(id)completion;
-(void)getTransferInRes:(id)res completion:(id)completion;
-(void)dismissAll;
-(void)cancelApplyTransferIn;
-(void)applyTransferIn:(id)anIn completion:(id)completion;
@end
