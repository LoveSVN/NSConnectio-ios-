//
//  ViewController.m
//  NSConnection探测
//
//  Created by 张晓亮 on 2018/11/20.
//  Copyright © 2018 张晓亮. All rights reserved.
//

#import "ViewController.h"
#import "NSConnection.h"
#import "ClassicPhone.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.

    Class class = NSClassFromString(@"NSDistantObject");

    id<Conversationable> phone = [[ClassicPhone alloc] init];
    NSConnection* connection = [[NSConnection alloc] init];
    [connection setRootObject:phone];
    BOOL ret = [connection registerName:@"com.pebble8888.server"];
    if (!ret){
        NSLog(@"error");
    }
    [[NSRunLoop currentRunLoop] run];

//    NSConnection *cont =


}


@end
