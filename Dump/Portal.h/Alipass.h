/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EvoucherInfo, NSString, UIImage, Merchant, Platform, TradeInfo2, FileInfo, StyleInfo;

@interface Alipass : XXUnknownSuperclass {
@private
	UIImage* logoImage;
	UIImage* adImage;
	EvoucherInfo* evoucherInfo;
	Merchant* merchant;
	TradeInfo2* trade;
	Platform* platform;
	FileInfo* file;
	StyleInfo* style;
	NSString* datePrompt;
}
@property(retain, nonatomic) NSString* datePrompt;
@property(retain, nonatomic) StyleInfo* style;
@property(retain, nonatomic) FileInfo* file;
@property(retain, nonatomic) TradeInfo2* trade;
@property(retain, nonatomic) Platform* platform;
@property(retain, nonatomic) Merchant* merchant;
@property(retain, nonatomic) EvoucherInfo* evoucherInfo;
@property(retain, nonatomic) UIImage* adImage;
@property(retain, nonatomic) UIImage* logoImage;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
@end
