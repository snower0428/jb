//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSOutputStream;

__attribute__((visibility("hidden")))
@interface GCKPB_PBCodedOutputStream : NSObject
{
    NSMutableData *buffer_;
    unsigned int position_;
    NSOutputStream *output_;
}

+ (id)streamWithData:(id)arg1;
+ (id)streamWithOutputStream:(id)arg1;
+ (id)streamWithOutputStream:(id)arg1 bufferSize:(int)arg2;
- (void)writeRawLittleEndian64:(long long)arg1;
- (void)writeRawLittleEndian32:(int)arg1;
- (void)writeRawVarint64:(long long)arg1;
- (void)writeRawVarint32:(int)arg1;
- (void)writeTag:(int)arg1 format:(int)arg2;
- (void)writeRawPtr:(const void *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (void)writeRawData:(id)arg1;
- (void)writeRawByte:(unsigned char)arg1;
- (void)checkNoSpaceLeft;
- (int)spaceLeft;
- (void)flush;
- (void)refreshBuffer;
- (void)writeRawMessageSetExtension:(int)arg1 value:(id)arg2;
- (void)writeMessageSetExtension:(int)arg1 value:(id)arg2;
- (void)writeUnknownGroups:(int)arg1 values:(id)arg2;
- (void)writeGroups:(int)arg1 values:(id)arg2;
- (void)writeDatas:(int)arg1 values:(id)arg2;
- (void)writeMessages:(int)arg1 values:(id)arg2;
- (void)writeStrings:(int)arg1 values:(id)arg2;
- (void)writeEnums:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeBools:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeSFixed32s:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeSFixed64s:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeSInt64s:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeSInt32s:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeFixed32s:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeFixed64s:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeUInt32s:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeInt32s:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeInt64s:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeUInt64s:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeFloats:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeDoubles:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeSInt64:(int)arg1 value:(long long)arg2;
- (void)writeSInt64NoTag:(long long)arg1;
- (void)writeSInt32:(int)arg1 value:(int)arg2;
- (void)writeSInt32NoTag:(int)arg1;
- (void)writeSFixed64:(int)arg1 value:(long long)arg2;
- (void)writeSFixed64NoTag:(long long)arg1;
- (void)writeSFixed32:(int)arg1 value:(int)arg2;
- (void)writeSFixed32NoTag:(int)arg1;
- (void)writeEnum:(int)arg1 value:(int)arg2;
- (void)writeEnumNoTag:(int)arg1;
- (void)writeUInt32:(int)arg1 value:(unsigned int)arg2;
- (void)writeUInt32NoTag:(unsigned int)arg1;
- (void)writeData:(int)arg1 value:(id)arg2;
- (void)writeDataNoTag:(id)arg1;
- (void)writeMessage:(int)arg1 value:(id)arg2;
- (void)writeMessageNoTag:(id)arg1;
- (void)writeUnknownGroup:(int)arg1 value:(id)arg2;
- (void)writeUnknownGroupNoTag:(int)arg1 value:(id)arg2;
- (void)writeGroup:(int)arg1 value:(id)arg2;
- (void)writeGroupNoTag:(int)arg1 value:(id)arg2;
- (void)writeString:(int)arg1 value:(id)arg2;
- (void)writeStringNoTag:(id)arg1;
- (void)writeBool:(int)arg1 value:(BOOL)arg2;
- (void)writeBoolNoTag:(BOOL)arg1;
- (void)writeFixed32:(int)arg1 value:(unsigned int)arg2;
- (void)writeFixed32NoTag:(unsigned int)arg1;
- (void)writeFixed64:(int)arg1 value:(unsigned long long)arg2;
- (void)writeFixed64NoTag:(unsigned long long)arg1;
- (void)writeInt32:(int)arg1 value:(int)arg2;
- (void)writeInt32NoTag:(int)arg1;
- (void)writeInt64:(int)arg1 value:(long long)arg2;
- (void)writeInt64NoTag:(long long)arg1;
- (void)writeUInt64:(int)arg1 value:(unsigned long long)arg2;
- (void)writeUInt64NoTag:(unsigned long long)arg1;
- (void)writeFloat:(int)arg1 value:(float)arg2;
- (void)writeFloatNoTag:(float)arg1;
- (void)writeDouble:(int)arg1 value:(double)arg2;
- (void)writeDoubleNoTag:(double)arg1;
- (id)initWithOutputStream:(id)arg1 data:(id)arg2;
- (void)dealloc;

@end

