/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, UIImage, NSMutableDictionary;

@interface COCSchoolInfo : XXUnknownSuperclass {
@private
	BOOL idCardFlag;
	NSString* agentId;
	NSString* agentCode;
	NSString* agentName;
	NSString* schoolPinYin;
	NSMutableDictionary* schoolNameDic;
	NSString* _firstLetter;
	NSArray* highlightRanges;
	UIImage* iconImage;
	NSString* imgUrl;
	NSString* areaId;
	NSString* areaName;
}
@property(retain, nonatomic) NSString* firstLetter;
@property(retain, nonatomic) NSString* areaName;
@property(retain, nonatomic) NSString* areaId;
@property(retain, nonatomic) UIImage* iconImage;
@property(retain, nonatomic) NSString* imgUrl;
@property(retain, nonatomic) NSArray* highlightRanges;
@property(retain, nonatomic) NSMutableDictionary* schoolNameDic;
@property(retain, nonatomic) NSString* schoolPinYin;
@property(assign, nonatomic) BOOL idCardFlag;
@property(retain, nonatomic) NSString* agentName;
@property(retain, nonatomic) NSString* agentCode;
@property(retain, nonatomic) NSString* agentId;
-(void).cxx_destruct;
-(void)_buildPY;
-(id)chineseChar:(id)aChar;
-(void)_buildFirstLetter;
@end

