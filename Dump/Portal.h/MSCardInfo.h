/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MSToString.h"

@class NSString;

@interface MSCardInfo : MSToString {
@private
	NSString* _userId;
	NSString* _certNo;
	NSString* _name;
	NSString* _dimcertNo;
	NSString* _logo;
	NSString* _bankName;
	NSString* _cardNo;
}
@property(retain, nonatomic) NSString* cardNo;
@property(retain, nonatomic) NSString* bankName;
@property(retain, nonatomic) NSString* logo;
@property(retain, nonatomic) NSString* dimcertNo;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* certNo;
@property(retain, nonatomic) NSString* userId;
-(void).cxx_destruct;
@end
