//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NSMutableArray, TBCityMyCommonHeadView, TBCityMyStorePayInfoItem, TBCityStoreDetailItem, UIButton, UIImageView, UILabel, UITableViewCell, UIView;

@interface TBCityStoreDetailView : UITableView
{
    TBCityMyCommonHeadView *_switchControlView;
    UIView *_storeHeadView;
    UITableViewCell *_storeBaseInfoView;
    UIButton *_addressBtn;
    UIButton *_phoneBtn;
    UIButton *_menuMoreBtn;
    UIButton *_reviewMoreBtn;
    UIButton *_dianBtn;
    UIButton *_dianTextBtn;
    UIButton *_shopListBtn;
    UIButton *_takeoutBtn;
    UIButton *_takeoutTextBtn;
    UIButton *_cityDiscountBtn;
    UIButton *_cityDiscountTextBtn;
    UIButton *_reservationBtn;
    UIButton *_reservationTextBtn;
    UIButton *_otherStoreBtn;
    UIButton *_myStorePayBtn;
    NSMutableArray *_couponBtnList;
    UITableView *_storeMenuTableView;
    UITableView *_storeReviewTableView;
    UIImageView *_bgImageView;
    UIView *_addressAndPhoneView;
    UIView *_storeSupportView;
    UIView *_couponView;
    UIView *_myStorePayView;
    UIView *_menuView;
    UIView *_reviewView;
    UIImageView *_storeImageView;
    UILabel *_nameLabel;
    UILabel *_perPriceLabel;
    UIView *_dianView;
    UIView *_dianTextView;
    UIView *_takeoutView;
    UIView *_takeoutTextView;
    UIView *_cityDiscountView;
    UIView *_cityDiscountTextView;
    UIView *_reservationView;
    UIView *_reservationTextView;
    TBCityStoreDetailItem *storeData;
    TBCityMyStorePayInfoItem *myStorePay;
    UITableView *storeMenuView;
    float baseInfoViewH;
}

@property(readonly, nonatomic) UITableView *storeReviewTableView; // @synthesize storeReviewTableView=_storeReviewTableView;
@property(readonly, nonatomic) UITableView *storeMenuTableView; // @synthesize storeMenuTableView=_storeMenuTableView;
@property(readonly, nonatomic) TBCityMyCommonHeadView *switchControlView; // @synthesize switchControlView=_switchControlView;
@property(readonly, nonatomic) UIButton *otherStoreBtn; // @synthesize otherStoreBtn=_otherStoreBtn;
@property(readonly, nonatomic) UIView *storeHeadView; // @synthesize storeHeadView=_storeHeadView;
@property(readonly, nonatomic) UIButton *myStorePayBtn; // @synthesize myStorePayBtn=_myStorePayBtn;
@property(readonly, nonatomic) NSMutableArray *couponBtnList; // @synthesize couponBtnList=_couponBtnList;
@property(readonly, nonatomic) UIButton *reservationTextBtn; // @synthesize reservationTextBtn=_reservationTextBtn;
@property(readonly, nonatomic) UIButton *reservationBtn; // @synthesize reservationBtn=_reservationBtn;
@property(readonly, nonatomic) UIButton *cityDiscountTextBtn; // @synthesize cityDiscountTextBtn=_cityDiscountTextBtn;
@property(readonly, nonatomic) UIButton *cityDiscountBtn; // @synthesize cityDiscountBtn=_cityDiscountBtn;
@property(readonly, nonatomic) UIButton *takeoutTextBtn; // @synthesize takeoutTextBtn=_takeoutTextBtn;
@property(readonly, nonatomic) UIButton *dianTextBtn; // @synthesize dianTextBtn=_dianTextBtn;
@property(readonly, nonatomic) UIButton *takeoutBtn; // @synthesize takeoutBtn=_takeoutBtn;
@property(readonly, nonatomic) UIButton *shopListBtn; // @synthesize shopListBtn=_shopListBtn;
@property(readonly, nonatomic) UIButton *dianBtn; // @synthesize dianBtn=_dianBtn;
@property(readonly, nonatomic) UIButton *reviewMoreBtn; // @synthesize reviewMoreBtn=_reviewMoreBtn;
@property(readonly, nonatomic) UIButton *menuMoreBtn; // @synthesize menuMoreBtn=_menuMoreBtn;
@property(readonly, nonatomic) UIButton *phoneBtn; // @synthesize phoneBtn=_phoneBtn;
@property(readonly, nonatomic) UIButton *addressBtn; // @synthesize addressBtn=_addressBtn;
@property(readonly, nonatomic) UITableViewCell *storeBaseInfoView; // @synthesize storeBaseInfoView=_storeBaseInfoView;
- (void).cxx_destruct;
- (void)scrollViewIn:(int)arg1;
- (void)setReservationLabel:(BOOL)arg1;
- (void)setCityDiscountLabel:(BOOL)arg1;
- (void)setTakeoutLabel:(BOOL)arg1;
- (void)setDianLabel:(BOOL)arg1;
- (id)getRightTextBtn:(struct CGRect)arg1 textView:(id)arg2;
- (id)getRightTextView:(struct CGRect)arg1 content:(id)arg2 collor:(id)arg3;
- (id)getLeftBtn:(struct CGRect)arg1 image:(id)arg2;
- (void)addMyStorePayView:(id)arg1;
- (void)setCouponView;
- (void)setStoreSupportView;
- (void)setAddressAndPhoneView;
- (void)setSwitchControlView;
- (void)setStoreHeadView;
- (float)view2Fit:(id)arg1 top:(float)arg2 h:(float)arg3;
- (float)getBaseInfoViewHeight;
- (void)sizeToFit4StoreInfo;
- (void)setView:(id)arg1;
- (void)initStoreHeadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
