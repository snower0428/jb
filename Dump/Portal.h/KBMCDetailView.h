/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class KBMCYiMaView, NSMutableArray, KBMCDetailController, UIImageView, UILabel, NSArray, UIButton, KBMCToolView;

@interface KBMCDetailView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	UIImageView* _backgroundView;
	UIImageView* _decorateView;
	UIImageView* _couponIconView;
	UILabel* _couponNameLabel;
	UILabel* _couponStatusLabel;
	UIImageView* _leftDayImage;
	UILabel* _leftDayLabel;
	UIImageView* _grooveLine;
	UILabel* _couponPaymentTitle;
	UILabel* _couponPaymentLabel;
	UILabel* _couponPaymentHint;
	UILabel* _couponPaymentHint2;
	UIImageView* _seperateLine;
	UILabel* _couponNumberTitle;
	UILabel* _couponNumberLabel;
	UILabel* _availableTimeLabel;
	UILabel* _drawBackLabel;
	UILabel* _drawBackCountLabel;
	KBMCToolView* _toolView;
	KBMCYiMaView* _yimaView;
	UIButton* _flipButton;
	KBMCDetailController* _detailController;
	NSMutableArray* _codeArray;
}
@property(retain, nonatomic) NSArray* codeArray;
@property(readonly, assign, nonatomic) int codeCount;
@property(assign, nonatomic) KBMCDetailController* detailController;
@property(retain, nonatomic) KBMCToolView* toolView;
-(void)swipeTriggeredByRight:(id)right;
-(void)swipeTriggeredByLeft:(id)left;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)playSoundWave:(id)wave;
-(void)flip;
-(void)setCacheData:(id)data;
-(void)reloadData:(id)data;
-(void)_formatCodeArray:(id)array;
-(int)_canUseTimes:(id)times;
-(void)clearData;
-(void)_applyTimeInfoWithData:(id)data;
-(void)_applyDrawBackWithData:(id)data;
-(void)_layoutDrawback;
-(void)_applyModeIsAvailable:(BOOL)available;
-(void)_applyVerifyWithData:(id)data;
-(void)_applyImageWithURL:(id)url;
-(void)_applyStatus:(id)status;
-(void)_applyExpiredBegin:(id)begin end:(id)end state:(id)state;
-(void)setVerifyToolEnable:(BOOL)enable;
-(void)loadCodeStringAtIndex:(int)index;
-(void)setCodeStringAtIndex:(int)index;
-(id)_generateProperCode:(id)code;
-(id)initWithFrame:(CGRect)frame;
-(void)_mockData;
-(void)dealloc;
-(void)createSubviews;
-(void)createToolViewWithTotal:(int)total QRCodeMode:(BOOL)mode soundWaveMode:(BOOL)mode3 toolHidden:(BOOL)hidden;
-(void)createYiMaViewWithImage:(id)image;
-(void)clearVerifyViewIfNeeded;
-(void)_layoutName;
-(void)_layoutCode;
-(void)_layoutPaymentInfo:(id)info isCount:(BOOL)count;
-(void)_layoutLeftDay;
-(void)_layoutPaymentLabels;
@end

