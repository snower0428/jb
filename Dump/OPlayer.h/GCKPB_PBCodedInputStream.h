//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInputStream, NSMutableData;

__attribute__((visibility("hidden")))
@interface GCKPB_PBCodedInputStream : NSObject
{
    NSMutableData *buffer;
    unsigned int bufferSize;
    unsigned int bufferSizeAfterLimit;
    unsigned int bufferPos;
    NSInputStream *input;
    int lastTag;
    unsigned int totalBytesRetired;
    unsigned int currentLimit;
    unsigned int recursionDepth;
}

+ (id)streamWithInputStream:(id)arg1;
+ (id)streamWithData:(id)arg1;
@property(retain, nonatomic) NSInputStream *input; // @synthesize input;
@property(retain, nonatomic) NSMutableData *buffer; // @synthesize buffer;
- (void)skipRawData:(unsigned int)arg1;
- (id)readRawData:(unsigned int)arg1;
- (BOOL)readRawByte;
- (BOOL)refillBuffer:(BOOL)arg1;
- (BOOL)isAtEnd;
- (unsigned int)bytesUntilLimit;
- (void)popLimit:(unsigned int)arg1;
- (void)recomputeBufferSizeAfterLimit;
- (unsigned int)pushLimit:(unsigned int)arg1;
- (void)resetSizeCounter;
- (long long)readRawLittleEndian64;
- (int)readRawLittleEndian32;
- (long long)readRawVarint64;
- (int)readRawVarint32;
- (long long)readSInt64;
- (int)readSInt32;
- (long long)readSFixed64;
- (int)readSFixed32;
- (int)readEnum;
- (int)readUInt32;
- (id)readData;
- (void)readMessage:(id)arg1 extensionRegistry:(id)arg2;
- (void)readUnknownGroup:(int)arg1 builder:(id)arg2;
- (void)readGroup:(int)arg1 builder:(id)arg2 extensionRegistry:(id)arg3;
- (id)readString;
- (BOOL)readBool;
- (int)readFixed32;
- (long long)readFixed64;
- (int)readInt32;
- (long long)readInt64;
- (long long)readUInt64;
- (float)readFloat;
- (double)readDouble;
- (void)skipMessage;
- (BOOL)skipField:(int)arg1;
- (void)checkLastTagWas:(int)arg1;
- (int)readTag;
- (id)initWithInputStream:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
