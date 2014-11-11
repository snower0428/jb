/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

@interface CCBProgressView : XXUnknownSuperclass {
@private
	UIImageView* _progressImageView;
	UIImageView* _trackImageView;
	float _progress;
}
@property(assign, nonatomic) float progress;
@property(retain, nonatomic) UIImageView* trackImageView;
@property(retain, nonatomic) UIImageView* progressImageView;
-(void).cxx_destruct;
-(void)addProgress:(float)progress;
-(id)initWithProgressImage:(id)progressImage trackImage:(id)image frame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame;
@end

