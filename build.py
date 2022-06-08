import hls4ml
import keras
import os

def build(hls_model):
    
    #hls4ml.writer.vivado_accelerator_writer.VivadoAcceleratorWriter.modify_build_script(hls_model)

    hls_model.write()
    
    hls_model.build()

    #Print out the report if you want
    hls4ml.report.read_vivado_report('my-hls-test')
