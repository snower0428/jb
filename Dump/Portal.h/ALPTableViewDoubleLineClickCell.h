/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALPTableViewDoubleLineCell.h"

@class UIButton;
@protocol DoubleLineDelegate;

@interface ALPTableViewDoubleLineClickCell : ALPTableViewDoubleLineCell {
@private
	id<DoubleLineDelegate> _delegate;
	UIButton* _logoButton;
	float _logoCornerRadius;
}
@property(assign, nonatomic) float logoCornerRadius;
@property(retain, nonatomic) UIButton* logoButton;
@property(assign, nonatomic) __weak id<DoubleLineDelegate> delegate;
-(void).cxx_destruct;
-(void)logoClick:(id)click;
-(void)setLogoImg:(id)img;
-(void)setLogoImg:(id)img withCorner:(float)corner;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)dealloc;
@end

