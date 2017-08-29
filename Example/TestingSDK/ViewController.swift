//
//  ViewController.swift
//  TestingSDK
//
//  Created by manjunath.ramesh@onepointglobal.com on 08/29/2017.
//  Copyright (c) 2017 manjunath.ramesh@onepointglobal.com. All rights reserved.
//

import UIKit
import OPGFramework


class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        let sdk = OPGSDK()
        var obj: OPGAuthenticate

        do {
            obj = try sdk.authenticate("", password: "")
            print(obj);
        }
        catch{
            print("Authentication Failed")         /* @"Error Occured. Contact Support!" */
            
        }
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}

