/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, UIView, UIImageView;

@interface ALPBasePassHeaderContentView : XXUnknownSuperclass {
	NSDictionary* _tagNames;
	UIImageView* _logoImageView;
	UIView* _logoImagePlaceHolder;
}
@property(retain, nonatomic) UIView* logoImagePlaceHolder;
@property(retain, nonatomic) UIImageView* logoImageView;
-(void).cxx_destruct;
-(void)reloadDataFromPassBaseInfo:(id)passBaseInfo;
-(void)reloadData:(id)data;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
-(void)commonInit:(CGRect)init;
-(id)controlWithNamed:(id)named;
-(BOOL)hiddenForControl:(id)control hidden:(BOOL)hidden;
-(BOOL)frameForControl:(id)control frame:(CGRect)frame;
-(void)ctrlCallSel:(id)sel sel:(SEL)sel2;
@end

