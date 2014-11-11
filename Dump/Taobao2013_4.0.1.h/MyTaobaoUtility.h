//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface MyTaobaoUtility : NSObject
{
}

+ (void)setupCorner:(id)arg1 size:(struct CGSize)arg2 up:(BOOL)arg3 down:(BOOL)arg4;
+ (id)shadowView:(id)arg1 superView:(id)arg2;
+ (id)cellArrowView;
+ (id)mergeprovince:(id)arg1 city:(id)arg2 area:(id)arg3;
+ (id)downloadImageWithUrl:(id)arg1 target:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (id)imageWithLink:(id)arg1;
+ (void)showLoadingStatus:(BOOL)arg1;
+ (id)scretchImage:(id)arg1 edge:(float)arg2 targetLength:(float)arg3;
+ (id)zoomOutImage:(id)arg1;
+ (id)zoomOutImage:(id)arg1 toSize:(struct CGSize)arg2;
+ (id)crop:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)showLogisticsEmptyView:(id)arg1 show:(BOOL)arg2;
+ (void)showAddressEmptyView:(id)arg1 show:(BOOL)arg2;
+ (void)setRoundFrame:(id)arg1 radius:(float)arg2;
+ (void)showSuccuessView:(id)arg1;
+ (void)showInfoView:(id)arg1;
+ (void)showFailedView:(id)arg1;
+ (void)showAlertView:(id)arg1 msg:(id)arg2;

@end
