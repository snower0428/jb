//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TBPluginFactory : NSObject
{
}

+ (id)itemDetailHost;
+ (id)searchHost;
+ (id)sharedPluginFactory;
- (id)viewControllerForRegisteredUrlNaivgation:(id)arg1;
- (id)viewControllerForTaobaoInternalNaivgation:(id)arg1;
- (id)viewControllerForScheme:(id)arg1;
- (id)viewControllerWithAction:(id)arg1 forPath:(id)arg2;
- (id)viewControllerForHost:(id)arg1;
- (BOOL)isArcCirclePath:(id)arg1;
- (id)wetaoURLWithURL:(id)arg1;
- (BOOL)isWeTaoURL:(id)arg1;
- (BOOL)isSNSDetailTDCodeURL:(id)arg1;
- (BOOL)isSNSAccountTDCodeURL:(id)arg1;
- (BOOL)isSNSDetailH5URL:(id)arg1;
- (BOOL)isSNSWeitaoSquareH5URL:(id)arg1;
- (BOOL)isSNSAccountH5URL:(id)arg1;
- (BOOL)isLogisticsURL:(id)arg1;
- (BOOL)isLogisticsDetailURL:(id)arg1;
- (id)preprocessingAction:(id)arg1;
- (id)viewControllerForDemoteH5:(id)arg1;
- (id)controllerFromAction:(id)arg1;
- (id)getItemIdOfString:(id)arg1;
- (id)itemId:(id)arg1;
- (BOOL)isItemURL:(id)arg1;
- (id)itemIdForWapItem2:(id)arg1;
- (id)itemIdForWapItem1:(id)arg1;
- (id)isvSchemaForCommonItem:(id)arg1;
- (id)itemIdForH5CartItem:(id)arg1;
- (id)itemIdForCommonItem:(id)arg1;
- (BOOL)isNumberString:(id)arg1;
- (BOOL)isTaoQiangGouURL:(id)arg1;
- (BOOL)isCalenderPlan:(id)arg1;
- (BOOL)isMyCouponURL:(id)arg1;
- (BOOL)isGuaGuaKaURL:(id)arg1;
- (BOOL)isTBCalender:(id)arg1;
- (BOOL)isSearchShopURL:(id)arg1;
- (BOOL)isOrderListURL:(id)arg1;
- (BOOL)isMyFavoriteURL:(id)arg1;
- (BOOL)isLoginURL:(id)arg1;
- (BOOL)isRegisterURL:(id)arg1;
- (BOOL)isGoldCoinURL:(id)arg1;
- (BOOL)isCategoryBrowserURL:(id)arg1;
- (BOOL)isMovieURL:(id)arg1;
- (BOOL)isTripURL:(id)arg1;
- (BOOL)isJuHomeURL:(id)arg1;
- (BOOL)isLotteryURL:(id)arg1;
- (BOOL)isRechangeURL:(id)arg1;
- (BOOL)isOrderDetail:(id)arg1;
- (id)standardURLofSearchInShopOriginalURL:(id)arg1;
- (BOOL)isSearchInShopURL:(id)arg1;
- (id)standardShopURLofOriginalURL:(id)arg1;
- (BOOL)isShopURL:(id)arg1;
- (id)searchURLfromGlobalURL:(id)arg1;
- (id)getParameterValueWithName:(id)arg1 parameters:(id)arg2;
- (BOOL)isGlobalSearchURL:(id)arg1;
- (BOOL)isSearchURL:(id)arg1;
- (BOOL)isGlobalSearchHost:(id)arg1;
- (BOOL)isSearchHost:(id)arg1;
- (BOOL)isTaobaoInternalTabbarURL:(id)arg1;
- (BOOL)isTaobaoInternalGoToURL:(id)arg1;
- (BOOL)isTaobaoInternalNavigationURL:(id)arg1;

@end
