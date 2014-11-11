//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTMerchantViewController.h"

#import "MTMerchantDealsChildViewControllerDelegate.h"
#import "MTShareActionSheetDelegate.h"

@class MTCinemaMiniSummaryView, MTCinemaShowtimesChildViewController, MTNavigationBarRightCustomView;

@interface MTCinemaDealsViewController : MTMerchantViewController <MTMerchantDealsChildViewControllerDelegate, MTShareActionSheetDelegate>
{
    MTCinemaMiniSummaryView *_miniSummaryControl;
    MTCinemaShowtimesChildViewController *_showtimesChildViewController;
    MTNavigationBarRightCustomView *_navigationBarRightCustomView;
}

- (void).cxx_destruct;
- (id)payloadForShareMethod:(int)arg1;
- (void)didClickShareButton;
- (void)didClickCollectButton;
- (void)merchantDealsChildViewControllerDidReceiveDeals;
- (void)didGetCinemaShowtimes:(id)arg1;
- (void)scrollToCinemaShowtimesView;
- (void)didTapMiniSummary;
- (void)fetchCinemaShowtimes;
- (void)setMerchant:(id)arg1;
- (void)viewDidLoad;

@end
