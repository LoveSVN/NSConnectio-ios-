//
//  NSDistantObject.h
//  NSConnection探测client
//
//  Created by 张晓亮 on 2018/11/20.
//  Copyright © 2018 张晓亮. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface NSDistantObject : NSProxy <NSCoding>
- (void)setProtocolForProxy:(nullable Protocol *)proto;
@end
