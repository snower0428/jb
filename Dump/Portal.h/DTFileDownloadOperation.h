/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTURLRequestOperation.h"

@class NSString, NSURL;

@interface DTFileDownloadOperation : DTURLRequestOperation {
@private
	BOOL _canOverwite;
	NSURL* _sourceURL;
	NSString* _targetPath;
	id _internalProgressBlock;
	unsigned _contentLength;
}
@property(assign, nonatomic) unsigned contentLength;
@property(copy, nonatomic) id internalProgressBlock;
@property(assign, nonatomic) BOOL canOverwite;
@property(retain, nonatomic) NSString* targetPath;
@property(retain, nonatomic) NSURL* sourceURL;
+(id)pathForFile:(id)file;
+(id)temporaryPathForPath:(id)path;
+(id)outputStreamForTemporaryFileAtPath:(id)path;
-(void).cxx_destruct;
-(void)stream:(id)stream handleEvent:(unsigned)event;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)buildHTTPFieldsFormFileAttributes:(id)attributes;
-(void)didFinish;
-(id)httpHeaderDateFormat;
-(void)start;
-(void)setProgressBlock:(id)block;
-(void)setCompletionBlock:(id)block;
-(id)initWithFileAtURL:(id)url toPath:(id)path;
@end
