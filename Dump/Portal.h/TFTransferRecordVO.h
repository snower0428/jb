/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString;

@interface TFTransferRecordVO : XXUnknownSuperclass {
@private
	BOOL _cardNoHidden;
	BOOL _income;
	NSString* _userName;
	NSString* _userAccount;
	NSString* _userId;
	NSString* _cardNo;
	NSString* _bankShortName;
	NSString* _bankName;
	NSString* _cardIndex;
	NSString* _cardChannel;
	NSString* _cardLastNo;
	NSString* _headImgpath;
	NSString* _type;
	NSDate* _createDate;
	NSString* _billNo;
}
@property(retain, nonatomic) NSString* billNo;
@property(assign, nonatomic) BOOL income;
@property(assign, nonatomic) BOOL cardNoHidden;
@property(retain, nonatomic) NSDate* createDate;
@property(retain, nonatomic) NSString* type;
@property(retain, nonatomic) NSString* headImgpath;
@property(retain, nonatomic) NSString* cardLastNo;
@property(retain, nonatomic) NSString* cardChannel;
@property(retain, nonatomic) NSString* cardIndex;
@property(retain, nonatomic) NSString* bankName;
@property(retain, nonatomic) NSString* bankShortName;
@property(retain, nonatomic) NSString* cardNo;
@property(retain, nonatomic) NSString* userId;
@property(retain, nonatomic) NSString* userAccount;
@property(retain, nonatomic) NSString* userName;
+(id)jsonString;
+(id)recordWithDic:(id)dic;
+(id)testData;
-(void).cxx_destruct;
@end

