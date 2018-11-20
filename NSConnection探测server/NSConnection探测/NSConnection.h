//
//  NSConnection.h
//  NSConnection探测
//
//  Created by 张晓亮 on 2018/11/20.
//  Copyright © 2018 张晓亮. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>

@interface NSConnection : NSObject

@property (readonly, copy) NSDictionary* statistics;
@property double requestTimeout;
@property double replyTimeout;
@property (retain) id rootObject;
//@property <NSConnectionDelegate>* delegate;
@property BOOL independentConversationQueueing;
@property (readonly, getter=isValid) BOOL valid;
//@property (readonly, retain) id* rootProxy;
@property (readonly, copy) NSArray* requestModes;
@property (readonly, retain) NSPort* sendPort;
@property (readonly, retain) NSPort* receivePort;
@property (readonly) BOOL multipleThreadsEnabled;
@property (readonly, copy) NSArray* remoteObjects;
@property (readonly, copy) NSArray* localObjects;

+ (id) lookUpConnectionWithReceivePort:(id)arg1 sendPort:(id)arg2;
+ (id) connectionWithReceivePort:(id)arg1 sendPort:(id)arg2;
+ (id) connectionWithRegisteredName:(id)arg1 host:(id)arg2 usingNameServer:(id)arg3;
+ (id) serviceConnectionWithName:(id)arg1 rootObject:(id)arg2 usingNameServer:(id)arg3;
+ (id) allConnections;
+ (void) _enableLogging:(BOOL)arg1;
+ (id) connectionWithRegisteredName:(id)arg1 host:(id)arg2;
+ (id) rootProxyForConnectionWithRegisteredName:(id)arg1 host:(id)arg2;
+ (id) rootProxyForConnectionWithRegisteredName:(id)arg1 host:(id)arg2 usingNameServer:(id)arg3;
+ (id) serviceConnectionWithName:(id)arg1 rootObject:(id)arg2;
+ (id) currentConversation;
+ (void) _toggleLogging;
+ (void) initialize;
+ (id) defaultConnection;
+ (id) statistics;

- (void) setRootObject:(id)arg1;
- (id) rootObject;
- (id) receivePort;
- (id) sendPort;
- (void) dispatchWithComponents:(id)arg1;
- (void) handlePortMessage:(id)arg1;
- (void) _portInvalidated:(id)arg1;
- (void) removeRunLoop:(id)arg1;
- (void) returnResult:(id)arg1 exception:(id)arg2 sequence:(unsigned int)arg3 imports:(id)arg4;
- (id) initWithReceivePort:(id)arg1 sendPort:(id)arg2;
- (id) rootProxy;
- (BOOL) registerName:(id)arg1 withNameServer:(id)arg2;
- (void) addRunLoop:(id)arg1;
- (double) replyTimeout;
- (double) requestTimeout;
- (void) _setWhitelist:(id)arg1;
- (void) sendReleasedProxies;
- (id) keyedRootObject;
- (void) addPortsToRunLoop:(id)arg1;
- (void) removePortsFromRunLoop:(id)arg1;
- (void) _encodeProxyList:(id)arg1 forCoder:(id)arg2;
- (void) handleKeyedReleasedProxies:(id)arg1;
- (void) handleUnkeyedReleasedProxies:(char*)arg1 length:(unsigned long)arg2;
- (Class) _portCoderClass;
- (void) _sendBeforeTime:(double)arg1 coder:(id)arg2 doAuthenticationCheck:(BOOL)arg3;
- (BOOL) _verifyComponents:(id)arg1;
- (id) portCoderWithComponents:(id)arg1;
- (void) handlePortCoder:(id)arg1;
- (void) handleRequest:(id)arg1 sequence:(unsigned int)arg2;
- (void) decodeReleasedProxies:(id)arg1;
- (id) newConversation;
- (BOOL) _shouldDispatch:(id*)arg1 invocation:(id)arg2 sequence:(unsigned int)arg3 coder:(id)arg4;
- (id) dispatchInvocation:(id)arg1;
- (void) encodeReleasedProxies:(id)arg1;
- (BOOL) hasRunLoop:(id)arg1;
- (void) sendInvocation:(id)arg1 internal:(BOOL)arg2;
- (void) _authenticateComponents:(id)arg1;
- (BOOL) registerName:(id)arg1;
- (void) setRequestTimeout:(double)arg1;
- (void) setReplyTimeout:(double)arg1;
- (BOOL) independentConversationQueueing;
- (void) setIndependentConversationQueueing:(BOOL)arg1;
- (void) addRequestMode:(id)arg1;
- (void) removeRequestMode:(id)arg1;
- (id) requestModes;
- (id) replyMode;
- (void) setReplyMode:(id)arg1;
- (void) _incrementLocalProxyCount;
- (void) _decrementLocalProxyCount;
- (void) addClassNamed:(char*)arg1 version:(unsigned long)arg2;
- (unsigned long) versionForClassNamed:(id)arg1;
- (void) releaseWireID:(unsigned int)arg1 count:(unsigned long)arg2;
- (id) remoteObjects;
- (id) localObjects;
- (Class) _portCoderClassWithComponents:(id)arg1;
- (BOOL) sendWireCountForWireID:(unsigned int)arg1 port:(id)arg2;
- (void) sendInvocation:(id)arg1;
- (void) _setUseKC:(BOOL)arg1;
- (void) enableMultipleThreads;
- (BOOL) multipleThreadsEnabled;
- (void) runInNewThread;
- (id) retain;
- (oneway void) release;
- (void) dealloc;
- (id) description;
- (void) invalidate;
- (void) setDelegate:(id)arg1;
- (BOOL) isValid;
- (id) delegate;
- (id) init;
- (void) run;
- (id) statistics;

@end
