/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel;
@protocol ALPTransferBtnClicked;

@interface ALPFundButtonView : XXUnknownSuperclass {
	UILabel* _transferInLabel;
	UILabel* _transferOutLabel;
	BOOL _transferOutCanClick;
@private
	id<ALPTransferBtnClicked> _clickDelegate;
	float _originStartY;
}
@property(assign, nonatomic) BOOL transferOutCanClick;
@property(assign, nonatomic) float originStartY;
@property(assign, nonatomic) __weak id<ALPTransferBtnClicked> clickDelegate;
-(void).cxx_destruct;
-(void)gotoTransferOut;
-(void)gotoTransferIn;
-(void)handleGesture:(id)gesture;
-(void)updateTransferOutStatus:(BOOL)status;
-(id)initWithFrame:(CGRect)frame;
@end
