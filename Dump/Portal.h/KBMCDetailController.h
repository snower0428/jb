/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDataSource.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDelegate.h"
#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CLLocationManagerDelegate.h"

@class NSDictionary, UIView, UITableViewCell, KBMCCouponsManager, CLLocationManager, KBMCDetailView, KBMCInfoView, KBMCListViewController, UIButton, KBMCMerchantsManager, KBMCPushMessageHandler, NSMutableArray, KBMCVerifyRecordManager;

@interface KBMCDetailController : XXUnknownSuperclass <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, CLLocationManagerDelegate> {
	KBMCCouponsManager* _couponsManager;
	KBMCMerchantsManager* _merchantsManager;
	KBMCVerifyRecordManager* _verifyRecordManager;
	KBMCPushMessageHandler* _pushMessageHandler;
	UIView* _view;
	UIView* _baseView;
	KBMCDetailView* _detailView;
	KBMCInfoView* _infoView;
	UITableViewCell* _loadingCell;
	UITableViewCell* _verifyLoadingCell;
	UIButton* _returnButton;
	UIButton* _soundWave;
	struct {
		unsigned textChangesMade : 1;
		unsigned updatedAttrString : 1;
		unsigned updatedFramesetter : 1;
	} _flag;
	NSDictionary* _dataInfo;
	NSMutableArray* _useRecords;
	CLLocationManager* _locationManager;
	KBMCListViewController* _listViewController;
}
@property(assign, nonatomic) KBMCListViewController* listViewController;
@property(retain, nonatomic) KBMCPushMessageHandler* pushMessageHandler;
@property(retain, nonatomic) KBMCMerchantsManager* merchantsManager;
@property(retain, nonatomic) KBMCCouponsManager* couponManager;
@property(retain, nonatomic) UIView* baseView;
@property(retain, nonatomic) UIView* view;
@property(readonly, assign, nonatomic) BOOL stateChange;
@property(readonly, assign, nonatomic, getter=isDetail) BOOL detail;
@property(retain, nonatomic) NSDictionary* dataInfo;
-(void)onSendDataInfo:(id)info;
-(void)onSendDataTimeout;
-(void)onSendDataFailed:(int)failed;
-(void)onSendDataStarted;
-(void)playDynamicId:(id)anId;
-(void)playSoundWave:(id)wave atIndex:(int)index;
-(void)useToolsViewCheckPushConnection;
-(void)vibrate;
-(void)setUseStatus:(int)status numberOfUseParts:(int)useParts;
-(void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)_handleMerchantDetialAtIndex:(id)index;
-(int)_merchantCellHeightAtIndex:(id)index;
-(id)_merchantTableView:(id)view cellAtIndexPath:(id)indexPath;
-(int)_merchantRowNumber;
-(id)loadCell;
-(void)_handleRecordDetialAtIndex:(id)index;
-(int)_recordCellHeightAtIndex:(id)index;
-(id)_recordTableView:(id)view cellAtIndexPath:(id)indexPath;
-(int)_recordRowNumber;
-(id)_verifyLoadingCell;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)_merchantsLoadinglayout;
-(void)handleUseStatusNotification:(id)notification;
-(void)_merchantLoading;
-(void)couponsManager:(id)manager didFinishSyncDetails:(id)details error:(id)error;
-(void)couponsManager2:(id)a2 didFinishSyncDetails:(id)details error:(id)error;
-(void)couponsManagerWillStartSyncDetails2:(id)couponsManager;
-(void)couponsManagerWillStartSyncDetails:(id)couponsManager;
-(void)setUpDetailInfo:(id)info;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)loadCodeAtIndex:(int)index;
-(void)pushWebappWithVoucherFrom:(id)from voucherId:(id)anId;
-(void)enterDetailInfo;
-(void)resetDetailInfo;
-(void)loadUseRecords;
-(void)loadMerchantsRecords;
-(void)_preLoadMerchantsRecords;
-(void)_loadMerchantsWithLatitude:(double)latitude longitude:(double)longitude;
-(void)queryLocation;
-(BOOL)isSampleCoupon;
-(BOOL)isAvailable;
-(void)stopHandleNotification;
-(void)startHandleNotification;
-(void)dismissDetail;
-(void)flip;
-(void)flipAnimated:(BOOL)animated completion:(id)completion;
-(void)dealloc;
-(id)init;
-(id)buttonImage;
-(void)setCacheData:(id)data;
-(void)syncDetail;
-(void)_applyData;
-(void)_clearData;
-(void)_applyUseData;
-(void)setStateChange:(BOOL)change;
@end

