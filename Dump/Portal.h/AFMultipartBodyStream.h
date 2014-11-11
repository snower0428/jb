/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSStreamDelegate.h"
#import "NSCopying.h"

@class NSOutputStream, NSMutableArray, AFHTTPBodyPart, NSInputStream, NSEnumerator, NSError, NSMutableData;

@interface AFMultipartBodyStream : XXUnknownSuperclass <NSCopying, NSStreamDelegate> {
@private
	unsigned _streamStatus;
	NSError* _streamError;
	unsigned _stringEncoding;
	NSMutableArray* _HTTPBodyParts;
	NSEnumerator* _HTTPBodyPartEnumerator;
	AFHTTPBodyPart* _currentHTTPBodyPart;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSMutableData* _buffer;
	unsigned _numberOfBytesInPacket;
	double _delay;
}
@property(retain, nonatomic) NSMutableData* buffer;
@property(retain, nonatomic) NSOutputStream* outputStream;
@property(retain, nonatomic) AFHTTPBodyPart* currentHTTPBodyPart;
@property(retain, nonatomic) NSEnumerator* HTTPBodyPartEnumerator;
@property(retain, nonatomic) NSMutableArray* HTTPBodyParts;
@property(assign, nonatomic) unsigned stringEncoding;
@property(retain, nonatomic) NSError* streamError;
@property(assign, nonatomic) unsigned streamStatus;
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, assign, nonatomic) unsigned long long contentLength;
@property(retain, nonatomic) NSInputStream* inputStream;
@property(assign, nonatomic) double delay;
@property(assign, nonatomic) unsigned numberOfBytesInPacket;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void*)callback context:(XXStruct_4pnlqD*)context;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;
-(void)removeFromRunLoop:(id)runLoop forMode:(id)mode;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(BOOL)setProperty:(id)property forKey:(id)key;
-(id)propertyForKey:(id)key;
-(void)close;
-(void)open;
-(BOOL)hasBytesAvailable;
-(BOOL)getBuffer:(char**)buffer length:(unsigned*)length;
-(int)read:(char*)read maxLength:(unsigned)length;
-(void)appendHTTPBodyPart:(id)part;
-(void)setInitialAndFinalBoundaries;
-(id)initWithStringEncoding:(unsigned)stringEncoding;
@end

