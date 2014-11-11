/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, NSOutputStream;

@interface PBCodedOutputStream : XXUnknownSuperclass {
	NSMutableData* buffer;
	int position;
	NSOutputStream* output;
}
@property(retain) NSOutputStream* output;
@property(retain) NSMutableData* buffer;
@property(assign) int position;
+(id)streamWithOutputStream:(id)outputStream bufferSize:(int)size;
+(id)streamWithOutputStream:(id)outputStream;
+(id)streamWithData:(id)data;
-(void)dealloc;
-(id)initWithOutputStream:(id)outputStream data:(id)data;
-(void)writeDoubleNoTag:(double)tag;
-(void)writeDouble:(int)aDouble value:(double)value;
-(void)writeFloatNoTag:(float)tag;
-(void)writeFloat:(int)aFloat value:(float)value;
-(void)writeUInt64NoTag:(long long)tag;
-(void)writeUInt64:(int)a64 value:(long long)value;
-(void)writeInt64NoTag:(long long)tag;
-(void)writeInt64:(int)a64 value:(long long)value;
-(void)writeInt32NoTag:(int)tag;
-(void)writeInt32:(int)a32 value:(int)value;
-(void)writeFixed64NoTag:(long long)tag;
-(void)writeFixed64:(int)a64 value:(long long)value;
-(void)writeFixed32NoTag:(int)tag;
-(void)writeFixed32:(int)a32 value:(int)value;
-(void)writeBoolNoTag:(BOOL)tag;
-(void)writeBool:(int)aBool value:(BOOL)value;
-(void)writeStringNoTag:(id)tag;
-(void)writeString:(int)string value:(id)value;
-(void)writeGroupNoTag:(int)tag value:(id)value;
-(void)writeGroup:(int)group value:(id)value;
-(void)writeUnknownGroupNoTag:(int)tag value:(id)value;
-(void)writeUnknownGroup:(int)group value:(id)value;
-(void)writeMessageNoTag:(id)tag;
-(void)writeMessage:(int)message value:(id)value;
-(void)writeDataNoTag:(id)tag;
-(void)writeData:(int)data value:(id)value;
-(void)writeUInt32NoTag:(int)tag;
-(void)writeUInt32:(int)a32 value:(int)value;
-(void)writeEnumNoTag:(int)tag;
-(void)writeEnum:(int)anEnum value:(int)value;
-(void)writeSFixed32NoTag:(int)tag;
-(void)writeSFixed32:(int)a32 value:(int)value;
-(void)writeSFixed64NoTag:(long long)tag;
-(void)writeSFixed64:(int)a64 value:(long long)value;
-(void)writeSInt32NoTag:(int)tag;
-(void)writeSInt32:(int)a32 value:(int)value;
-(void)writeSInt64NoTag:(long long)tag;
-(void)writeSInt64:(int)a64 value:(long long)value;
-(void)writeMessageSetExtension:(int)extension value:(id)value;
-(void)writeRawMessageSetExtension:(int)extension value:(id)value;
-(void)refreshBuffer;
-(void)flush;
-(int)spaceLeft;
-(void)checkNoSpaceLeft;
-(void)writeRawByte:(unsigned char)byte;
-(void)writeRawData:(id)data;
-(void)writeRawData:(id)data offset:(int)offset length:(int)length;
-(void)writeTag:(int)tag format:(int)format;
-(void)writeRawVarint32:(int)a32;
-(void)writeRawVarint64:(long long)a64;
-(void)writeRawLittleEndian32:(int)a32;
-(void)writeRawLittleEndian64:(long long)a64;
@end

