/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, NSDictionary;

@interface KBMLocationsCell : XXUnknownSuperclass {
@private
	UILabel* relevantLabel;
	UILabel* addrLable;
	UILabel* telLabel;
	NSDictionary* item;
}
@property(retain, nonatomic) UILabel* addrLable;
@property(retain, nonatomic) UILabel* telLabel;
@property(retain, nonatomic) UILabel* relevantLabel;
@property(retain, nonatomic) NSDictionary* item;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)dealloc;
@end
