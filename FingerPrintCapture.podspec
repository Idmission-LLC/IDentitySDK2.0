Pod::Spec.new do |spec|


  spec.name         = "FingerPrintCapture"
  spec.version      = "9.4.8.2.1"
  spec.summary      = "FingerprintCapture lets user add FingerPrintCaptureSDK in their project"
  spec.description  = <<-DESC 
                    FingerPrintCapture helps user to add FingerPrintCaptureSDK in their project.
                    On integrating FingerPrintCaptureSDK user will be able to Capture FingerPrints.
                    Also able to use various service ID mentioned in Documentation.
                   DESC
  
  spec.homepage     = "https://github.com/Idmission-LLC/IDentitySDK2.0"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "Idmission LLC" => "amol.deshmukh@idmission.com" }
  spec.source       = { :git => "https://github.com/Idmission-LLC/IDentitySDK2.0.git", 
                        :tag => "#{spec.version}"}

  spec.platform     = :ios
  spec.ios.deployment_target = '13.0'
  spec.swift_version = "5"
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.ios.vendored_frameworks = 'FingerPrintCapture_Swift.xcframework'

end