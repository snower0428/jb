/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton;
@protocol SCWebViewBarDelegate;

@interface SCWebViewBar : XXUnknownSuperclass {
@private
	id<SCWebViewBarDelegate> _delegate;
	UIButton* _preButton;
	UIButton* _nextButton;
}
@property(retain, nonatomic) UIButton* nextButton;
@property(retain, nonatomic) UIButton* preButton;
@property(assign, nonatomic) __weak id<SCWebViewBarDelegate> delegate;
-(void).cxx_destruct;
-(void)nextButtonAction;
-(void)preButtonAction;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
-(id)init;
@end

