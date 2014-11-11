/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface AssetMobiPhoneNode : XXUnknownSuperclass <NSCoding> {
	NSString* mainText;
	NSString* detailText;
	NSString* iconPath;
	NSMutableDictionary* dataDictionary;
	float cellHeight;
	NSString* cellType;
	NSString* cellClass;
}
@property(retain, nonatomic) NSString* cellClass;
@property(retain, nonatomic) NSString* cellType;
@property(assign, nonatomic) float cellHeight;
@property(retain, nonatomic) NSMutableDictionary* dataDictionary;
@property(retain, nonatomic) NSString* iconPath;
@property(retain, nonatomic) NSString* detailText;
@property(retain, nonatomic) NSString* mainText;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(Class)cellDisplayClass;
-(id)assetCellIdentifier;
-(id)initWithCellType:(id)cellType;
-(id)valueForKey:(id)key;
-(void)setValue:(id)value forKey:(id)key;
@end

