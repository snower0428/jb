/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

@interface ALPFundUserAssetData : XXUnknownSuperclass {
@private
	BOOL canPurchase;
	NSString* fundOpText;
	NSString* totalAmount;
	NSString* totalProfit;
	NSString* previousProfit;
	NSString* previousDate;
	NSDictionary* notices;
	NSDictionary* assetExtInfo;
}
@property(retain, nonatomic) NSDictionary* assetExtInfo;
@property(retain, nonatomic) NSDictionary* notices;
@property(assign, nonatomic) BOOL canPurchase;
@property(retain, nonatomic) NSString* previousDate;
@property(retain, nonatomic) NSString* previousProfit;
@property(retain, nonatomic) NSString* totalProfit;
@property(retain, nonatomic) NSString* totalAmount;
@property(retain, nonatomic) NSString* fundOpText;
-(void).cxx_destruct;
-(id)getAnimationControl;
-(id)getIntroDesc;
-(id)getIntroTitle;
-(id)getMaintanText;
-(id)getAmountVal:(id)val;
-(void)applyDataWithKABAOPRODFundAssetsInfoResult:(id)kabaoprodfundAssetsInfoResult;
@end
