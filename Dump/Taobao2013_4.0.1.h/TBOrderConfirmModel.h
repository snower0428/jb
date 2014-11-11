//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

@class MTOPBuildOrderRequest, MTOPBuildOrderResult, NSMutableArray, NSMutableDictionary, NSString, TBAddressAndPostageModel, TBCreateOrderInvalidNodeInfo, TBCreateTradeData, TBCreateTradeInfo, TBCreateTradeNodeTypeCheckButton, TBMtopPostageModel;

@interface TBOrderConfirmModel : TBSDKRequestModel
{
    BOOL _buyNow;
    MTOPBuildOrderRequest *_buildOrderRequest;
    NSMutableDictionary *_groupNode;
    TBCreateTradeInfo *_createTradeInfo;
    TBCreateTradeData *_createTradeData;
    TBAddressAndPostageModel *_selectedAddressAndPostage;
    TBMtopPostageModel *_selectedPostage;
    NSString *_selectedAddressId;
    TBCreateOrderInvalidNodeInfo *_invalidInfo;
    MTOPBuildOrderResult *_buildOrderResult;
    int _resultType;
    NSMutableArray *_buildOrderNodesArray;
    TBCreateTradeNodeTypeCheckButton *_safePayCheckButton;
    TBCreateTradeNodeTypeCheckButton *_helpPayCheckButton;
}

@property(retain, nonatomic) TBCreateTradeNodeTypeCheckButton *helpPayCheckButton; // @synthesize helpPayCheckButton=_helpPayCheckButton;
@property(retain, nonatomic) TBCreateTradeNodeTypeCheckButton *safePayCheckButton; // @synthesize safePayCheckButton=_safePayCheckButton;
@property(retain, nonatomic) NSMutableArray *buildOrderNodesArray; // @synthesize buildOrderNodesArray=_buildOrderNodesArray;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) MTOPBuildOrderResult *buildOrderResult; // @synthesize buildOrderResult=_buildOrderResult;
@property(nonatomic) BOOL buyNow; // @synthesize buyNow=_buyNow;
@property(retain, nonatomic) TBCreateOrderInvalidNodeInfo *invalidInfo; // @synthesize invalidInfo=_invalidInfo;
@property(copy, nonatomic) NSString *selectedAddressId; // @synthesize selectedAddressId=_selectedAddressId;
@property(retain, nonatomic) TBMtopPostageModel *selectedPostage; // @synthesize selectedPostage=_selectedPostage;
@property(retain, nonatomic) TBAddressAndPostageModel *selectedAddressAndPostage; // @synthesize selectedAddressAndPostage=_selectedAddressAndPostage;
@property(retain, nonatomic) TBCreateTradeData *createTradeData; // @synthesize createTradeData=_createTradeData;
@property(retain, nonatomic) TBCreateTradeInfo *createTradeInfo; // @synthesize createTradeInfo=_createTradeInfo;
@property(retain, nonatomic) NSMutableDictionary *groupNode; // @synthesize groupNode=_groupNode;
@property(retain, nonatomic) MTOPBuildOrderRequest *buildOrderRequest; // @synthesize buildOrderRequest=_buildOrderRequest;
- (void).cxx_destruct;
- (id)lastItemId;
- (void)checkButtonNode:(id)arg1 selected:(BOOL)arg2;
- (BOOL)checkIfAllParamsLegal;
- (BOOL)checkNewDataLegal;
- (BOOL)checkOldDataLegal;
- (float)totalPostage;
- (float)totalPrice;
- (int)auctionQuantity;
- (void)requestDidFinishLoad:(id)arg1;
- (void)load;
- (void)checkPayInfoGroup:(id)arg1;
- (void)createDataWith:(id)arg1;
- (void)setSafePayAndHelpPayButtonFromArray:(id)arg1;
- (BOOL)checkCompareNodes:(id)arg1;
- (id)nodeForKey:(id)arg1;
- (id)nodesNeedToCheck;
- (BOOL)checkIfNodeInGroup:(id)arg1;
- (void)createGroupNode;
- (id)initWithCreateOrderData:(id)arg1;
- (void)dealloc;

@end

