/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface BaseModel : XXUnknownSuperclass {
@private
	BOOL _status;
	NSString* _message;
	NSString* _statusCode;
	int _bizeType;
	NSArray* _errorList;
	NSString* _endCode;
	NSString* _result;
	NSString* _memo;
}
@property(retain, nonatomic) NSString* memo;
@property(retain, nonatomic) NSString* result;
@property(retain, nonatomic) NSString* endCode;
@property(retain, nonatomic) NSArray* errorList;
@property(assign, nonatomic) int bizeType;
@property(retain, nonatomic) NSString* statusCode;
@property(retain, nonatomic) NSString* message;
@property(assign, nonatomic) BOOL status;
-(void).cxx_destruct;
-(id)initWithDataDictionary:(id)dataDictionary;
@end

